/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */
#include "foxrtc_proxy.h"
#include "foxrtc_wrap.h"


@implementation FoxrtcTransport
-(void*)getCptr {
	return swigCPtr;
}

-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject {
	if((self = [super init])) {
		swigCPtr = cptr;
        swigCMemOwn = ownCObject;
	}
	return self;
}

-(id)init
{
 
	if((self = [super init])) {
		void* cptr = _wrap_new_FoxrtcTransport();
        swigCPtr = cptr;
        swigCMemOwn = YES;
	}
	return self;

}

-(int)SendRtp: (NSString *)data len: (int)len
{
  return _wrap_FoxrtcTransport_SendRtp([self getCptr], data, len); 
}

-(int)SendRtcp: (NSString *)data len: (int)len
{
  return _wrap_FoxrtcTransport_SendRtcp([self getCptr], data, len); 
}


-(void)dealloc{

  if (swigCPtr != NULL) {
    if (swigCMemOwn) {
        _wrap_delete_FoxrtcTransport((void*)swigCPtr);
        swigCMemOwn = NO;
    }
    swigCPtr = NULL;
  }
  [super dealloc];

}

@end


@implementation Foxrtc
-(void*)getCptr {
	return swigCPtr;
}

-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject {
	if((self = [super init])) {
		swigCPtr = cptr;
        swigCMemOwn = ownCObject;
	}
	return self;
}

+(Foxrtc*)Instance
{
    void* cPtr = _wrap_Foxrtc_Instance();
     Foxrtc* ret = nil;
     if(cPtr) {
        ret = [[[Foxrtc alloc] initWithCptr:cPtr swigOwnCObject:NO] autorelease];
     }
    return ret; 
}

-(int)Init: (FoxrtcTransport*)transport
{
  return _wrap_Foxrtc_Init([self getCptr], [transport getCptr]); 
}

-(int)Uninit
{
  return _wrap_Foxrtc_Uninit([self getCptr]); 
}

-(int)GetDeviceInfo
{
  return _wrap_Foxrtc_GetDeviceInfo([self getCptr]); 
}

-(int)OpenCamera: (int)index
{
  return _wrap_Foxrtc_OpenCamera([self getCptr], index); 
}

-(int)CloseCamera
{
  return _wrap_Foxrtc_CloseCamera([self getCptr]); 
}

-(int)CreateLocalAudioStream: (unsigned int)ssrc
{
  return _wrap_Foxrtc_CreateLocalAudioStream([self getCptr], ssrc); 
}

-(int)DeleteLocalAudioStream
{
  return _wrap_Foxrtc_DeleteLocalAudioStream([self getCptr]); 
}

-(int)CreateRemoteAudioStream: (unsigned int)ssrc
{
  return _wrap_Foxrtc_CreateRemoteAudioStream([self getCptr], ssrc); 
}

-(int)DeleteRemoteAudioStream
{
  return _wrap_Foxrtc_DeleteRemoteAudioStream([self getCptr]); 
}

-(int)CreateLocalVideoStream: (int)ssrc view: (RenderView*)view
{
  return _wrap_Foxrtc_CreateLocalVideoStream([self getCptr], ssrc, (__bridge void*)view); 
}

-(int)DeleteLocalVideoStream
{
  return _wrap_Foxrtc_DeleteLocalVideoStream([self getCptr]); 
}

-(int)CreateRemoteVideoStream: (int)ssrc view: (RenderView*)view
{
  return _wrap_Foxrtc_CreateRemoteVideoStream([self getCptr], ssrc, (__bridge void*)view); 
}

-(int)DeleteRemoteVideoStream
{
  return _wrap_Foxrtc_DeleteRemoteVideoStream([self getCptr]); 
}

-(int)IncomingData: (NSString *)data len: (int)len
{
  return _wrap_Foxrtc_IncomingData([self getCptr], data, len); 
}


-(void)dealloc{

  if (swigCPtr != NULL) {
    if (swigCMemOwn) {
        _wrap_delete_Foxrtc((void*)swigCPtr);
        swigCMemOwn = NO;
    }
    swigCPtr = NULL;
  }
  [super dealloc];

}

@end

