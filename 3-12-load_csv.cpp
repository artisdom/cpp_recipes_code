#include <iostream>

Manager::Manager()
{
    ifstream cvsStringFile{ "strings.cvs"s };

    assert(csvStringFile);

    if (csvStringFile)
    {
        while (!csvStringFile.eof())
        {
            string line;
            getline(csvStringFile, line);

            if (line.size() > 0)
            {
                stringstream lineStream{ line };

                string stringIdText;
                getline(lineStream, stringIdText, ',');

                stringstream idStream{ stringIdText };
                uint32_t stringId;
                idStream >> stringId;

                uint32_t languageId = 0;
                string stringText;
                while (getline(lineStream, stringText, ','))
                {
                    m_StringPacks[languageId++][stringId] = stringText;
                }
            }
        }
    }

    SetLanguage(Languages::EN_US);
}