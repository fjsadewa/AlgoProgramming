#include <stdio.h>
#include <stdbool.h>

int main(){
 long long int i, j, n, q, o, x, y;
 scanf("%lld %lld", &n, &o);
 long long int grid[n][n];
 for(i=0; i<n; i++){
  for(j=0; j<n; j++){
   grid[i][j] = 0;
  }
 }
 for(i=0; i<o; i++){
  scanf("%lld %lld", &x, &y);
  grid[x-1][y-1] = 1;
 }
 scanf("%lld", &q);
 long long int a, b;
 for(i=0; i<q; i++){
  bool aa = false, ab = false, ac = false, ad = false;
  scanf("%lld %lld", &a, &b);
  long long int k, m;
  long long int benteng = 0;
  //benteng
  k = a-1;
  m = b-1;
  for(m; m<n; m++){
   if(aa == true){
    break;
   }else{
    if(grid[k][m] == 1){
     aa = true;
     benteng++;
     break;
    }else{
     aa = false;
    }
   }
  }
  m = b-1;
  for(m; m>=0; m--){
   if(ab == true){
    break;
   }else{
    if(grid[k][m] == 1){
     ab = true;
     benteng++;
     break;
    }else{
     ab = false;
    }
   }
  }
  m = b-1;
  for(k; k>=0; k--){
   if(ac == true){
    break;
   }else{
    if(grid[k][m] == 1){
     ac = true;
     benteng++;
     break;
    }else{
     ac = false;
    }
   }
  }
  k = a-1;
  for(k; k<n; k++){
   if(ad == true){
    break;
   }else{
    if(grid[k][m] == 1){
     ad = true;
     benteng++;
     break;
    }else{
     ad = false;
    }
   }
  }
  //menteri
  long long int menteri = 0;
  aa = false, ab = false, ac = false, ad = false;
  long long int bb=b-1, ba=a-1;
  k = ba;
  m = bb;
  while(k<n){
   if(k >= n || m >= n){
    break;
   }
   if(aa==true){
    break;
   }
   while(m<n){
    if(aa == true){
     break;
    }else{
     if(grid[k][m] == 1){
      aa=true;
      menteri++;
      break;
     }else{
      aa=false;
      bb++;
      ba++;
      k=ba;
      m=bb;
      break;
     }
    }
   }
  }
  bb=b-1, ba=a-1;
  k=ba;
  m=bb;
  while(k>=0){
   if(k < 0 || m < 0){
    break;
   }
   if(ab==true){
    break;
   }
   while(m>=0){
    if(ab == true){
     break;
    }else{
     if(grid[k][m] == 1){
      ab=true;
      menteri++;
      break;
     }else{
      ab=false;
      bb--;
      ba--;
      k=ba;
      m=bb;
      break;
     }
    }
   }   
  }
  bb=b-1, ba=a-1;
  k = ba;
  m = bb;
  while(k>=0){
   if(k < 0 || m >= n){
    break;
   }
   if(ac==true){
    break;
   }
   while(m<n){
    if(ac == true){
     break;
    }else{
     if(grid[k][m] == 1){
      ac=true;
      menteri++;
      break;
     }else{
      ac=false;
      bb++;
      ba--;
      k=ba;
      m=bb;
      break;
     }
    }
   }
  }
  bb=b-1, ba=a-1;
  k = ba;
  m = bb;
  while(k<n){
   if(k >= n || m < 0){
    break;
   }
   if(ad==true){
    break;
   }
   while(m>=0){
    if(ad == true){
     break;
    }else{
     if(grid[k][m] == 1){
      ad=true;
      menteri++;
      break;
     }else{
      ad=false;
      bb--;
      ba++;
      k=ba;
      m=bb;
      break;
     }
    }
   }
  }
  //kuda
  long long int kuda = 0;
  k = a-1, m = b-1;
   if((k+2 < n && k+2 >= 0) && (m-1 >= 0 && m-1 < n)){
    if(grid[k+2][m-1] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }
   if((k+2 < n && k+2 >= 0) && (m+1 >= 0 && m+1 < n)){
    if(grid[k+2][m+1] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }if((k+1 < n && k+1 >= 0)&&(m-2 >= 0 && m-2 < n)){
    if(grid[k+1][m-2] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }if((k+1 < n && k+1 >= 0) && (m+2 >= 0 && m+2 < n)){
    if(grid[k+1][m+2] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }if((k-2 < n && k-2 >= 0) && (m-1 >= 0 && m-1 < n)){
    if(grid[k-2][m-1] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }if((k-2 < n && k-2 >= 0) && (m+1 >= 0 && m+1 < n)){
    if(grid[k-2][m+1] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }if((k-1 < n && k-1 >= 0) && (m-2 >= 0 && m-2 < n)){
    if(grid[k-1][m-2] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }if((k-1 < n && k-1 >= 0)&& (m+2 >= 0 && m+2 < n)){
    if(grid[k-1][m+2] == 1){
     kuda++;
    }else{
     kuda+=0;
    }
   }
  if(kuda>menteri && kuda>benteng){
  printf("%d\n", 1);
  }else if(menteri>kuda && menteri>benteng){
   printf("%d\n", 2);
  }else if(benteng>kuda && benteng>menteri){
   printf("%d\n", 3);
  }else if(kuda>menteri && kuda==benteng){
   printf("%d\n", 1);
  }else if(kuda>benteng && kuda==menteri){
   printf("%d\n", 1);
  }else if(menteri>kuda && menteri==benteng){
   printf("%d\n", 2);
  }else if(kuda==benteng && kuda==menteri){
   printf("%d\n", 1);
  }
 }
 return 0;
}
