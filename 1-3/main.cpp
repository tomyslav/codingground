#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    //ucitat n pa n brojeva, ispisat najvecu sumu 2 uzastopna
    
    int n = 0;
    int n1 = 0;
    int n2 = 0;
    int sum = 0;

    
    std::cout << "Upisite broj elemenata : ";
    std::cin >> n;
    
    for (int i = 0; i<n; ++i){
        int tmp;
        int tmp_sum;
        std::cout << "Upisi " << i+1 << ". broj: ";
        std::cin >> tmp;

        if(i % 2 == 0){
            n1 = tmp;
        }

        if(i % 2 == 1){
            n2 = tmp;
        }
        
        tmp_sum = n1 + n2;

        if(sum < tmp_sum){
            sum=tmp_sum;
        }

    }

        std::cout << "Najveca suma je : " << sum << std::endl;

}
