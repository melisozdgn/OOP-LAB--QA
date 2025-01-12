#include<iostream>
#include <iostream>
#include <fstream>
#include <cctype>  

using namespace std;

int main()
{
	//can create any file as an input file or use the given input.txt
    ifstream file("input.txt");

    if(!file)
	{
        cerr << "Error opening file." << endl;
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    int upperCount = 0, lowerCount = 0, blankCount = 0;
    string line;

    while(getline(file, line)) //read file line by line
	{
        lineCount++;
        
    //The variable inWord keeps track of whether we are inside a word or not.
        bool inWord = false;  
        
    //Count the number of characters
        for(int i = 0; i < line.length(); i++) 
		{
            char c = line[i];

            charCount++;
        
        //Count the number of upper case characters and lower case characters.
            if(isupper(c))
			{
                upperCount++;
            } 
			else if(islower(c))
			{
                lowerCount++;
            } 
			else if(isspace(c))
			{
                blankCount++;
            }
            if(isspace(c) || ispunct(c))
			{
                if(inWord)
				{
                    inWord = false;
                }
            }
			else
			{
                //if the character is not space or punctuation, we're in a word.
                if(!inWord)
				{
                    wordCount++;
                    inWord = true;
                }
            }
        }
		if(inWord)
        {
            wordCount++;  //count the last word if the line ends with a word
        }
    }

    cout << "Total characters: " << charCount << endl;
    cout << "Total words: " << wordCount << endl;
    cout << "Total lines: " << lineCount << endl;
    cout << "Total uppercase characters: " << upperCount << endl;
    cout << "Total lowercase characters: " << lowerCount << endl;
    cout << "Total blank spaces: " << blankCount << endl;
	
	file.close();
	
    return 0;
}









































