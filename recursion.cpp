
/*                  Another Question                   */
#include<iostream>
using namespace std;
bool  check(string& str, int i, int j){
    if (i>j)
    {
        return true;
    }
    if (str[i]!=str[j])
    {
        return false;

    }else
    i++;
    j--;
    return check(str,i,j); 
}


int main(){
    string n;
    cout<<"Enter value to Check it is palandrome or not "<<endl;
    cin>>n;
    bool p = check(n, 0, n.length()-1);
    if (p)
    {
        cout<<"Fucnction is Plendrome "<<endl;
    }else
    {
        cout<<"Fucnction is Not Plendrome "<<endl;
    }
    
    return 0;
}


  /*                 Question    */
// #include<iostream>
// using namespace std;

// int fun(string& str, int i, int j ){
//     if (i > j)
//         return 1;
//       swap(str[i] , str[j]);

//     i++;
//     j--;
//     fun(str, i,j);   
// }

// int main(){

//     string n;
//     cout<<"ENter value for swaping "<<endl;
//     cin>>n;
    
//     fun(n, 0, n.length()-1);
//     cout<<n<<endl;
//     return 0;
// }