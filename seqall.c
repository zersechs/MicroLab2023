
<div style="border:1px solid #990000;padding-left:20px;margin:0 0 10px 0;">

<h4>A PHP Error was encountered</h4>

<p>Severity: Warning</p>
<p>Message:  file_put_contents(/home/var/www/html/uploads/8x4w2xi1-seqall.c): failed to open stream: Read-only file system</p>
<p>Filename: controllers/Get.php</p>
<p>Line Number: 604</p>


	<p>Backtrace:</p>
	
		
	
		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/application/libraries/sentry-php/lib/Raven/Breadcrumbs/ErrorHandler.php<br />
			Line: 34<br />
			Function: _error_handler			</p>

		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/application/libraries/sentry-php/lib/Raven/ErrorHandler.php<br />
			Line: 132<br />
			Function: handleError			</p>

		
	
		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/application/controllers/Get.php<br />
			Line: 604<br />
			Function: file_put_contents			</p>

		
	
		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/application/controllers/Get.php<br />
			Line: 609<br />
			Function: curl_exec			</p>

		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/application/controllers/Get.php<br />
			Line: 567<br />
			Function: get_chunk			</p>

		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/application/controllers/Get.php<br />
			Line: 183<br />
			Function: curl_download			</p>

		
	
		
	
		
			<p style="margin-left:10px">
			File: /home/var/www/html/index.php<br />
			Line: 298<br />
			Function: require_once			</p>

		
	

</div>#include <stdio.h>
//#include<conio.h>
void main()
{
int f[50],i,st,len,j,c,k,count=0;
for (i=0;i<50;i++)
	f[i]=0;
	printf("files allocated are: \n");
	x:count=0;
	printf("enter starting block and length of files:");
	scanf("%d%d",&st,&len);
	for(k=st;k<(st+len);k++)
		if(f[k]==0)
		count++;
		if(len==count)
		{
			for(j=st;j<(st+len);j++)
			if(f[j]==0)
			{
				f[j]=1;
				printf("%d\t%d\n",j,f[j]);
			}
			if(j!=(st+len-1))
			printf("the file is allocated to disk \n");
		}
		else
		printf("the file is not allocated \n");
		printf("do you want to enter more files (YES-1 / NO-0)");
		scanf("%d",&c);
		if(c==1)
		goto x;
		else
		//exit();
		return 0;
		//getch();
	}
