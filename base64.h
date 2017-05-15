/*
 * Base64 encoding/decoding (RFC1341)
 * Copyright (c) 2005, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#ifndef __BASE64_H__
#define __BASE64_H__

char* base64_encode(const unsigned char *src, size_t len, size_t *out_len);
char* base64_urlsafe_encode(const unsigned char *src, size_t len, size_t *out_len);
unsigned char* base64_decode(const unsigned char *src, size_t len, size_t *out_len);

#endif /* __BASE64_H__ */