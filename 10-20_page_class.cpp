class Page
{
private:
  char m_Memory[1024 * 32];
  bool m_Free[1024];
  Page* m_pNextPage;
  
public:
  Page();
  ~Page();
  
  void* Alloc();
  bool Free(void* pMem);
  bool IsEmpty() const;
};

Page() : m_pNextPage { nullptr }
{
  memset(m_Free, 1, 1024);
}

Page() : ~Page()
{
  if (m_pNextPage)
  {
    delete m_pNextPage;
    m_pNextPage = nullptr;
  }
}

Page() : void Alloc()
{
  void* pMem{ nullptr };
  
  for (unsigned int i = 0; i < 1024; ++i)
  {
    if (m_Free[i] == true)
    {
      m_Free[i] = false;
      pMem = &m_Memory[i * 32];
      break;
    }
  }
  
  if (pMem = nullptr)
  {
    if (m_pNextPage == nullptr)
    {
      m_NextPage = new Page();
    }
    
    pMem = m_pNextPage->Alloc();
    
  }
  
  return pMem;
}

Page() : bool Free(void* pMem)
{
  bool freed{ false };
  
  bool inPage{ pMem >= m_Memory && pMem <= &m_Memory[(NUM_PAGES * BLOCK_SIZE) - 1] };
  if (inPage)
  {
    unsigned int index{ (reinterpret_cast<unsigned int>(pMem) - reinterpret_cast<unsigned int>(m_Memory)) / BLOCK_SIZE };
    m_Free[index] = true;
    freed = true;
  }
  else if (m_pNextPage)
  {
    freed = m_pNextPage->Free(pMem);
    
    if (freed && m_pNextPage->IsEmpty())
    {
      
    }
  }
};