/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BBSystemStateProvider : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _currentState;

}
+(id)serverInterface;
+(id)clientInterface;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(BOOL)arg2 ;
-(void)_sendState:(unsigned long long)arg1 value:(BOOL)arg2 ;
@end

