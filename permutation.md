C++에서의 순열  
===========
다음 순열과 이전 순열을 찾을 때 사용하는 함수 2가지  

1. ### 헤더파일  
#include < algorithm >  

2. ### 사용법
**순열 함수를 사용하기 전에 먼저 정렬을 해줘야 함!!**  
sort함수를 사용하여 정렬을 해주자  

next_permutation(배열/벡터의 첫 번째 값, 배열/벡터의 마지막 값);  
prev_permutation(배열/벡터의 첫 번째 값, 배열/벡터의 마지막 값);  

3. ### 사용예제  
배열 사용시  
ex) 배열 num과 N개의 배열길이
---> next_permutation(num, num+N);  
---> prev_permutation(num, num+N);  

벡터 사용시
ex) 벡터 v가 있을때  
---> next_permutation(v.begin(), v.end());   
---> prev_permutation(v.begin(), v.end());   
