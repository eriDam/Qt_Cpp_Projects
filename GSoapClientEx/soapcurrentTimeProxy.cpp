/* soapcurrentTimeProxy.cpp
   Generated by gSOAP 2.8.21 from currenttime.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapcurrentTimeProxy.h"

currentTimeProxy::currentTimeProxy()
{	currentTimeProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

currentTimeProxy::currentTimeProxy(const struct soap &_soap) : soap(_soap)
{ }

currentTimeProxy::currentTimeProxy(const char *url)
{	currentTimeProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

currentTimeProxy::currentTimeProxy(soap_mode iomode)
{	currentTimeProxy_init(iomode, iomode);
}

currentTimeProxy::currentTimeProxy(const char *url, soap_mode iomode)
{	currentTimeProxy_init(iomode, iomode);
	soap_endpoint = url;
}

currentTimeProxy::currentTimeProxy(soap_mode imode, soap_mode omode)
{	currentTimeProxy_init(imode, omode);
}

currentTimeProxy::~currentTimeProxy()
{ }

void currentTimeProxy::currentTimeProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns", "urn:currentTime", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void currentTimeProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void currentTimeProxy::reset()
{	destroy();
	soap_done(this);
	soap_initialize(this);
	currentTimeProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void currentTimeProxy::soap_noheader()
{	this->header = NULL;
}

const SOAP_ENV__Header *currentTimeProxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *currentTimeProxy::soap_fault()
{	return this->fault;
}

const char *currentTimeProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *currentTimeProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int currentTimeProxy::soap_close_socket()
{	return soap_closesock(this);
}

int currentTimeProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void currentTimeProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void currentTimeProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *currentTimeProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int currentTimeProxy::currentTime(const char *endpoint, const char *soap_action, double a, double b, double &result)
{	struct soap *soap = this;
	struct ns__currentTime soap_tmp_ns__currentTime;
	struct ns__currentTimeResponse *soap_tmp_ns__currentTimeResponse;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
        soap_endpoint = "http://127.0.0.1:8080/currentTime.cgi";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp_ns__currentTime.a = a;
	soap_tmp_ns__currentTime.b = b;
	soap_serializeheader(soap);
	soap_serialize_ns__currentTime(soap, &soap_tmp_ns__currentTime);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__currentTime(soap, &soap_tmp_ns__currentTime, "ns:currentTime", NULL)
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
	 || soap_put_ns__currentTime(soap, &soap_tmp_ns__currentTime, "ns:currentTime", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&result)
		return soap_closesock(soap);
	soap_default_double(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__currentTimeResponse = soap_get_ns__currentTimeResponse(soap, NULL, "ns:currentTimeResponse", NULL);
	if (!soap_tmp_ns__currentTimeResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns__currentTimeResponse->result;
	return soap_closesock(soap);
}
/* End of client proxy code */