//
//  main.cpp
//  The snail
//
//  Created by Tina Tsai on 2017/7/16.
//  Copyright © 2017年 Tina Tsai. All rights reserved.

/* H is the height of the well in feet,
   U is the distance in feet that the snail can climb during the day,
   D is the distance in feet that the snail slides down during the night,
   F is the fatigue factor expressed as a percentage
*/
#include <iostream>

using namespace std;
int h,u,d,f;


int main(){
  
    while(cin >> h >> u >> d >> f){
        
        if (h ==0)
            break;
        
        h=h*100; u=u*100; d=d*100;  //*100數值不會有小數點可以用int
        int dec = u/100*f; //f是疲勞的百分比
        
        int pos = 0;  //初始位置
        
        for(int day = 1; ; day++)  //從第一天開始
        {
            if( u > 0 )
                pos += u;
            
            if( pos > h )
            {
                printf("success on day %d\n", day);
                break;
            }
            
            pos -= d;  //滑落
            if( pos < 0 )  //沒有移動 當天位置不做計算
            {
                printf("failure on day %d\n", day);
                break;
            }
            
            u -= dec;
        }
    }
}
        
        
