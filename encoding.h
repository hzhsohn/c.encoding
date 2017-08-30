
typedef struct unicode_gb
{
	unsigned short unicode;
	unsigned short gb;
 } UNICODE_GB;


#ifdef  __cplusplus
extern "C" {
#endif

int	urldecode(char *str, int len);


/***  urlencode使用
 * 
	char *p;int k;
	char szb[]="人生如梦";
	//加码
	p=urlencode(szb,strlen(szb),&k);
	//解码
	urldecode(p,k);
	free(p);
	p=NULL;
*/
char * urlencode(char const *s, int len, int *new_length);

char* Gb2312ToUtf8(const char* gb2312, int len, char *utf8);
char* Utf8ToGb2312(const char* utf8, int len, char *temp);
int utf82unicode(unsigned char  *byte, int index, int count, unsigned short* unicode);
void  unicode2utf8(unsigned int unicode, unsigned char *byte, unsigned char *pCount);

#ifdef  __cplusplus
}
#endif
