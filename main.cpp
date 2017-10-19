#include <iostream>
#include <vector>
#include <string>

int inputRow, inputCol;

using namespace std;

int main()
{
 cout<<"Please enter the number of rows and columns you want."<<endl;
 cin>>inputRow;
 cin>>inputCol;

 vector < vector<char> > stars; 
 stars.resize(inputRow);

  if(inputRow > 1 && inputCol > 1)
   {
     for(int row = 0; row < stars.size(); row++)
      {
       stars[row].resize(inputRow);
      }
       for(int col = 0; col < stars.size(); col++)
        { 
         stars[col].resize(inputCol);
        } 
          for(int row = 0; row < stars.size(); row++)
           {
            for(int col = 0; col < stars[row].size(); col++)
             {
              stars[row][col] = '*';
              cout<<stars[row][col];
             }
            cout<<endl;
           }
    }
  else

return 0;
}
