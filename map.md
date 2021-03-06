map
======


1. ### map을 사용하는 때  
- 많은 자료를 정렬하여 저장하고 있고 빠른 검색을 필요로 할 경우   
- 많은 자료를 빠르게 검색한다고 하는 부분은 hash_map과 비슷 하지만 map과는 차이가 있음    
- map은 자료를 저장할 때 내부에서 자동으로 정렬을 하고, hash_map은 정렬하지 않음  

2. ### map을 사용하기 좋은 조건  
- 정렬해야 한다.
- 많은 자료를 저장하고, 검색이 빨라야 한다.
- 빈번하게 삽입, 삭제하지 않는다.

3. ### map의 사용  
#include < map >  
기본 형태 :  map<key,value>  
-> key와 value를 pair 형태로 선언

| 메소드 | 사용 및 설명 |
|:------:|:-----------|
| begin | 첫 번째 원소의 랜덤 접근 반복자를 반환 |
| clear | 저장하고 있는 모든 원소를 삭제 |
| empty | 비어 있을 때 true 반환 |
| end | 마지막 원소 다음의(미 사용 영역) 반복자를 반환 |
| erase | 특정 위치의 원소나 지정 범위의 원소들을 삭제 |
| find | key와 연관된 원소의 반복자 반환 |
| insert | 원소 추가 |
| lower_bound | 지정한 key의 요소를 가지고 있다면 해당 위치의 반복자를 반환 |
| operator[] | 	지정한 key 값으로 원소 추가 및 접근 |
| rbegin | 역방향으로 첫 번째 원소의 반복자를 반환 |
| rend | 역방향으로 마지막 원소 다음의 반복자를 반환 |
| size | 원소의 개수를 반환 |
| upper_bound | 지정한 key 요소를 가지고 있다면 해당 위치 다음 위치의 반복자 반환 |
