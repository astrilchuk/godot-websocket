/*************************************************************************/
/*  emws_server.cpp                                                      */
/*************************************************************************/
/*                       This file is part of:                           */
/*                      GODOT WEBSOCKET MODULE                           */
/*            https://github.com/LudiDorici/godot-websocket              */
/*************************************************************************/
/* Copyright (c) 2017 Ludi Dorici, di Alessandrelli Fabio                */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
#ifdef JAVASCRIPT_ENABLED

#include "emws_server.h"
#include "core/os/os.h"

Error EMWSServer::listen(int p_port, PoolVector<String> p_protocols, bool gd_mp_api) {

	return FAILED;
}

bool EMWSServer::is_listening() const {
	return false;
}

void EMWSServer::stop() {
}

bool EMWSServer::has_peer(int p_id) const {
	return false;
}

Ref<WebSocketPeer> EMWSServer::get_peer(int p_id) const {
	return NULL;
}

PoolVector<String> EMWSServer::get_protocols() const {
	PoolVector<String> out;

	return out;
}

EMWSServer::EMWSServer() {
}

EMWSServer::~EMWSServer() {
}

#endif // JAVASCRIPT_ENABLED
