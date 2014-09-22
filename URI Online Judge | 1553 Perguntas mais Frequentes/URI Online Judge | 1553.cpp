/*
 * URI Online Judge | 1553.cpp
 * 
 * Copyright 2014 Pompeu <pompeu@pompeu-System-Product-Name>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <cstdio>
 
int main( )
{
    unsigned int n,k;
 
    while(scanf("%u %u",&n,&k), n+k > 0){
 
        int p[1001]={0},a;
 
           while(n--){
                scanf("%d", &a);
                    p[a]++;
                }
            /*for(int i = 0;i < 101; i++)
                printf("%i ",p[i]);*/
 
            int maior = 0 , pos = 0, nk=0;
 
             for(int i = 0; i < 1001; i++){
                        if(maior <= p[i]){
                            maior = p[i];
                            pos = i;
                            nk = p[i];
                        }
 
            }
           if(nk >= k){
                printf("%i\n",pos);
           }else{
                    puts("0");
                }
    }
 
    return 0;
}
