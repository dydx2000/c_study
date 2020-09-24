#include <stdint.h>

#define URL "http://www.fishc.com"
#define NAME "鱼C工作室"
#define BOSS "小甲鱼"
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main(){
    printf("%s 成立于%d年%月%d日\n",NAME,YEAR,MONTH,DAY);
    printf("%s 是 %s 创立的\n",NAME,BOSS);
    printf("%s 的网址是%s",NAME,URL);
    return 0;
}
