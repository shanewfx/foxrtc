/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif

@interface SWIGTYPE_p_std__vectorT_AC__Talk__WBOperationItem_t : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_std__vectorT_std__string_t : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_AC__Talk__Service__ACService : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_AC__Talk__Service__ConfigService : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_AC__Talk__Service__CourseService : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_AC__Talk__Service__LogService : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_std__vectorT_char_t : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_std__vectorT_unsigned_char_t : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_p_void : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

@interface SWIGTYPE_unsigned___int64 : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

@end

extern int NULL;
enum ACClassState {
  STATE_INIT,
  STATE_ENTERING,
  STATE_ENTERED,
  STATE_LEAVING,
  STATE_LEAVE
};

enum ActionStatus {
  STATUS_DOING,
  STATUS_DONE,
  STATUS_FAILED
};

@interface ActionContext : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setToken: (SWIGTYPE_p_void*)value;
-(SWIGTYPE_p_void*)getToken;
-(id)init;

-(void)dealloc;

@end

enum ACServiceState {
  STATE_LOGIN_NONE = 0,
  STATE_LOGIN_INIT,
  STATE_LOGIN_LOGINING,
  STATE_LOGIN_LOGINED,
  STATE_LOGIN_LOGOUTING,
  STATE_LOING_LOGOUTED
};

@interface WBPencilPosData : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setSendTime: (SWIGTYPE_unsigned___int64*)value;
-(SWIGTYPE_unsigned___int64*)getSendTime;
-(void)setPenType: (unsigned char)value;
-(unsigned char)getPenType;
-(void)setXOffset: (unsigned int)value;
-(unsigned int)getXOffset;
-(void)setYOffset: (unsigned int)value;
-(unsigned int)getYOffset;
-(id)init;

-(void)dealloc;

@end

@interface WBDocumentData : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setSendTime: (SWIGTYPE_unsigned___int64*)value;
-(SWIGTYPE_unsigned___int64*)getSendTime;
-(void)setType: (unsigned char)value;
-(unsigned char)getType;
-(void)setTotalPage: (unsigned short)value;
-(unsigned short)getTotalPage;
-(void)setCurrentPage: (unsigned short)value;
-(unsigned short)getCurrentPage;
-(void)setCurrentPageMd5: (NSString*)value;
-(NSString*)getCurrentPageMd5;
-(id)init;

-(void)dealloc;

@end

enum WBOperation {
  WBO_None = 0,
  WBO_ADD = 1,
  WBO_DELETE = 2,
  WBO_EDIT = 3,
  WBO_CLEAR = 4,
  WBO_SYN = 5
};

@interface WBOperationItem : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setClientSeq: (unsigned int)value;
-(unsigned int)getClientSeq;
-(void)setServerSeq: (unsigned int)value;
-(unsigned int)getServerSeq;
-(void)setData: (SWIGTYPE_p_std__vectorT_char_t*)value;
-(SWIGTYPE_p_std__vectorT_char_t*)getData;
-(id)init;

-(void)dealloc;

@end

@interface WBOperationData : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setSendTime: (SWIGTYPE_unsigned___int64*)value;
-(SWIGTYPE_unsigned___int64*)getSendTime;
-(void)setBGMd5: (NSString*)value;
-(NSString*)getBGMd5;
-(void)setOperation: (enum WBOperation)value;
-(enum WBOperation)getOperation;
-(void)setItems: (SWIGTYPE_p_std__vectorT_AC__Talk__WBOperationItem_t*)value;
-(SWIGTYPE_p_std__vectorT_AC__Talk__WBOperationItem_t*)getItems;
-(id)init;

-(void)dealloc;

@end

enum QuestionType {
  QUESTION_SINGLE_CHOICE = 0,
  QUESTION_MULTI_CHOICE = 1
};

@interface ClassQuestion : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setQuestionId: (SWIGTYPE_unsigned___int64*)value;
-(SWIGTYPE_unsigned___int64*)getQuestionId;
-(void)setUserId: (SWIGTYPE_unsigned___int64*)value;
-(SWIGTYPE_unsigned___int64*)getUserId;
-(void)setType: (enum QuestionType)value;
-(enum QuestionType)getType;
-(void)setTitle: (NSString*)value;
-(NSString*)getTitle;
-(void)setContent: (NSString*)value;
-(NSString*)getContent;
-(void)setOptions: (SWIGTYPE_p_std__vectorT_std__string_t*)value;
-(SWIGTYPE_p_std__vectorT_std__string_t*)getOptions;
-(void)setCorrectOptions: (SWIGTYPE_p_std__vectorT_unsigned_char_t*)value;
-(SWIGTYPE_p_std__vectorT_unsigned_char_t*)getCorrectOptions;
-(id)init;

-(void)dealloc;

@end

@interface ClassAnswer : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setQuestionId: (unsigned long long)value;
-(unsigned long long)getQuestionId;
-(void)setUserId: (SWIGTYPE_unsigned___int64*)value;
-(SWIGTYPE_unsigned___int64*)getUserId;
-(void)setAnswerIdx: (SWIGTYPE_p_std__vectorT_unsigned_char_t*)value;
-(SWIGTYPE_p_std__vectorT_unsigned_char_t*)getAnswerIdx;
-(id)init;

-(void)dealloc;

@end

enum LogLevel {
  LOG_LEVEL_NONE = 0,
  LOG_LEVEL_FATAL = 1,
  LOG_LEVEL_CRITICAL,
  LOG_LEVEL_ERROR,
  LOG_LEVEL_WARNING,
  LOG_LEVEL_NOTICE,
  LOG_LEVEL_INFO,
  LOG_LEVEL_DEBUG
};

enum LogType {
  LOG_TYPE_CONSOLE,
  LOG_TYPE_FILE,
  LOG_TYPE_DEBUG
};

enum ACClientType {
  CLIENT_WINDOWS,
  CLIENT_MAC
};

@interface ACEventArgs : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
+(NSString*)TypeName;
-(unsigned int)Id;
-(BOOL)IsProcessed;
-(BOOL)MakeProcessed;
-(NSString*)EventName;

-(void)dealloc;

@end

@interface ActionStateEventArgs : ACEventArgs
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setStatus: (enum ActionStatus)value;
-(enum ActionStatus)getStatus;
-(void)setToken: (SWIGTYPE_p_void*)value;
-(SWIGTYPE_p_void*)getToken;

-(void)dealloc;

@end

@interface ServiceManager : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(SWIGTYPE_p_AC__Talk__Service__ACService*)ACService;
-(SWIGTYPE_p_AC__Talk__Service__ConfigService*)UAConfigService;
-(SWIGTYPE_p_AC__Talk__Service__ConfigService*)XmlConfigService;
-(SWIGTYPE_p_AC__Talk__Service__CourseService*)CourseService;
-(SWIGTYPE_p_AC__Talk__Service__LogService*)LogService;

-(void)dealloc;

@end

@interface UITask : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)Execute;
-(id)init;

-(void)dealloc;

@end

@interface UserAgentCallback : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)DispatchEvent: (ACEventArgs*)eventArgs;
-(void)ExecuteUITask: (UITask*)task;
-(id)init;

-(void)dealloc;

@end

@interface UserAgentConfig : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(void)setCallback: (UserAgentCallback*)value;
-(UserAgentCallback*)getCallback;
-(void)setXmlConfigPath: (NSString*)value;
-(NSString*)getXmlConfigPath;
-(id)init;

-(void)dealloc;

@end

@interface UserAgent : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
+(NSString*)getCKEY_UA_HOST;
+(UserAgent*)CreateUserAgent: (UserAgentConfig*)config;
+(void)ReleaseUserAgent: (UserAgent*)userAgent;
-(ServiceManager*)ServiceManager;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

