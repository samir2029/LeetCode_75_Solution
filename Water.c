int maxArea(int* height, int heightSize) {

    int i=0, j=heightSize-1;
    int max=0, width=0, length=0, area=0;
    
    while(i!=j){ 
        
        width=j-i;
        
        if(height[i]==height[j]){   
            length=height[i];
             j--;
             
             } /////  name samir that  
             
             else if(height[i]<height[j]){ 
                length=height[i];
                i++;
                }
                
                else{
                    length=height[j];
                    j--;
                    }
                    
                    area = width* length;
                    
                    if(max < area){
                        max = area;
                        }
                        }
                        
                         return max;
                         
                        }