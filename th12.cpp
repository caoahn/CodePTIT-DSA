    #include<bits/stdc++.h> 
    using namespace std; 

    int main() {  
        long long n,k ;
        cin >> n >> k ; 
        priority_queue<long long,vector<long long>,greater<long long>> pq ; 
        for(int i=0; i < n ; i++) { 
            long long x ; 
            cin >> x; 
            pq.push(x) ; 
        } 
        long long tmp = k ; 
        long long tien = 0; 
        while( pq.size() > 1) { 
            long long sum = 0 ;
            long long lon = 0 ; 
            long long nho = 0 ; 
            if(pq.size() >= k) { 
                while( tmp--) { 
                    if(tmp == k-1) nho = pq.top() ; 
                    if(tmp == 0) lon = pq.top() ;  
                    sum += pq.top() ;  
                    pq.pop() ; 
                }
            } 
            else { 
                long long hoa = pq.size()  ; 
                while(!pq.empty()) { 
                    if(pq.size() == hoa) nho = pq.top() ; 
                    if(pq.size() == 1) lon = pq.top() ; 
                    sum += pq.top() ; 
                    pq.pop() ; 
                }
            } 
            tmp = k ; 
            tien += lon - nho ; 
            pq.push(sum) ; 
        } 
        cout << pq.top() << endl ; 
        cout << tien  ; 
        return 0 ; 
    }