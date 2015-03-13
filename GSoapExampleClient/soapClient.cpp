/* soapClient.cpp
   Generated by gSOAP 2.8.21 from currentTime.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.21 2015-03-10 08:02:29 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__currentTime(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__currentTime *ns1__currentTime, _ns1__currentTimeResponse &ns1__currentTimeResponse)
{	struct __ns1__currentTime soap_tmp___ns1__currentTime;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.yourdomain.com/currentTime.cgi";
	if (soap_action == NULL)
		soap_action = "";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns1__currentTime.ns1__currentTime = ns1__currentTime;
	soap_serializeheader(soap);
	soap_serialize___ns1__currentTime(soap, &soap_tmp___ns1__currentTime);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__currentTime(soap, &soap_tmp___ns1__currentTime, "-ns1:currentTime", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__currentTime(soap, &soap_tmp___ns1__currentTime, "-ns1:currentTime", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&ns1__currentTimeResponse)
		return soap_closesock(soap);
	ns1__currentTimeResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__currentTimeResponse.soap_get(soap, "ns1:currentTimeResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
