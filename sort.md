C++의 sort함수
=============


1. ### 헤더파일
#include < algorithm > //sort함수 사용을 위해 추가  
#include < functional > //내림차순(greater< int >())사용을 위해 추가

2. ### 사용법  
sort(배열/벡터의 **_첫 번째 주소_**, 배열/벡터의 **_마지막 주소_**);  

3. ### 사용예제
ex) 배열 num과 N개의 배열길이  
---> sort(num, num+N);  //오름차순  
---> sort(num, num+N, greater< int >());  //내림차순

벡터사용시
ex) 벡터 v가 있을때  
---> sort(v.begin(), v.end());  //오름차순  
---> sort(v.begin(), v.end(), greater< int >());  //내림차순
