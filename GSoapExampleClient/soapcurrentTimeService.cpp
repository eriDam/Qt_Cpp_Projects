/* soapcurrentTimeService.cpp
   Generated by gSOAP 2.8.21 from currentTime.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapcurrentTimeService.h"

currentTimeService::currentTimeService()
{	currentTimeService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

currentTimeService::currentTimeService(const struct soap &_soap) : soap(_soap)
{ }

currentTimeService::currentTimeService(soap_mode iomode)
{	currentTimeService_init(iomode, iomode);
}

currentTimeService::currentTimeService(soap_mode imode, soap_mode omode)
{	currentTimeService_init(imode, omode);
}

currentTimeService::~currentTimeService()
{ }

void currentTimeService::currentTimeService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
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

void currentTimeService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void currentTimeService::reset()
{	destroy();
	soap_done(this);
	soap_initialize(this);
	currentTimeService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
currentTimeService *currentTimeService::copy()
{	currentTimeService *dup = SOAP_NEW_COPY(currentTimeService(*(struct soap*)this));
	return dup;
}
#endif

int currentTimeService::soap_close_socket()
{	return soap_closesock(this);
}

int currentTimeService::soap_force_close_socket()
{	return soap_force_closesock(this);
}

int currentTimeService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int currentTimeService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int currentTimeService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int currentTimeService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void currentTimeService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void currentTimeService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *currentTimeService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void currentTimeService::soap_noheader()
{	this->header = NULL;
}

const SOAP_ENV__Header *currentTimeService::soap_header()
{	return this->header;
}

int currentTimeService::run(int port)
{	if (soap_valid_socket(this->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				break;
			soap_destroy(this);
			soap_end(this);
		}
	}
	return this->error;
}

SOAP_SOCKET currentTimeService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET currentTimeService::accept()
{	return soap_accept(this);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int currentTimeService::ssl_accept()
{	return soap_ssl_accept(this);
}
#endif

int currentTimeService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->max_keep_alive > 0 && !--k)
			this->keep_alive = 0;
#endif

		if (soap_begin_serve(this))
		{	if (this->error >= SOAP_STOP)
				continue;
			return this->error;
		}
		if (dispatch() || (this->fserveloop && this->fserveloop(this)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve_ns__currentTime(currentTimeService*);

int currentTimeService::dispatch()
{	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "ns:currentTime"))
		return serve_ns__currentTime(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve_ns__currentTime(currentTimeService *soap)
{	struct ns__currentTime soap_tmp_ns__currentTime;
	struct ns__currentTimeResponse soap_tmp_ns__currentTimeResponse;
	soap_default_ns__currentTimeResponse(soap, &soap_tmp_ns__currentTimeResponse);
	soap_default_ns__currentTime(soap, &soap_tmp_ns__currentTime);
	if (!soap_get_ns__currentTime(soap, &soap_tmp_ns__currentTime, "ns:currentTime", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->currentTime(soap_tmp_ns__currentTime.a, soap_tmp_ns__currentTime.b, soap_tmp_ns__currentTimeResponse.result);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize_ns__currentTimeResponse(soap, &soap_tmp_ns__currentTimeResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__currentTimeResponse(soap, &soap_tmp_ns__currentTimeResponse, "ns:currentTimeResponse", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__currentTimeResponse(soap, &soap_tmp_ns__currentTimeResponse, "ns:currentTimeResponse", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
