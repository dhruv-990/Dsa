    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    

    
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string str={"palindrome"};
        
        for(int i=0 ; i<str.length();i++){
            for(int j = str.length()-1-i ; j<=0 ; j-- ){

                if(str[i]==str[j]){
                    cout<<"string is a palindrome";
                    break;
                }
                else{
                    cout<<"string is not a palindrome";
                    break;
                }
            }
        }
    
        
        return 0;
    }