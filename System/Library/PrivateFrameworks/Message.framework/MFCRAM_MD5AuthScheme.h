/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAuthScheme.h>

@interface MFCRAM_MD5AuthScheme : MFAuthScheme
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
-(BOOL)hasEncryption;
-(id)humanReadableName;
-(BOOL)sendsPlainTextPasswords;
@end
