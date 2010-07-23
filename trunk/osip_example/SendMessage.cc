#include <string>
#include <iostream>


//extern "C" {
 	#include <pthread.h>
// 	#include <osip2/internal.h>
 	#include <osip2/osip_mt.h>
 	#include <eXosip2/eXosip.h>
//}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <syslog.h>
#include <pthread.h>
#include <eXosip2/eXosip.h>
#include <eXosip2/eX_message.h>

using namespace std;

#define ENABLE_DEBUG

int main(){
	int i;
	fprintf (stderr, "Hello!\n");
	i = eXosip_init(stdin,stdout, 5060);
	if (i!=0)
	{
		fprintf (stderr, "could not initialize eXosip\n");
		exit(0);
	}

	i = eXosip_register_init ("sip:mikko at 131.177.247.154", "sip:131.177.247.154", NULL);
	if (i!=0)
	{
		fprintf (stderr, "could not initialize eXosip_register\n");
		exit(0);
	}

	i = eXosip_register (-1);
	if (i!=0)
	{
		fprintf (stderr, "could not \n");
		exit(0);
	}
	eXosip_message ("sip:mikko at 131.177.247.153", "sip:mikko at 131.177.247.154", NULL, "Hello");
}
