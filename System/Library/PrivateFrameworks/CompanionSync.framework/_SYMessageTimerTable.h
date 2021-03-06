/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _SYMessageTimerTable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;
	NSMutableDictionary* _bySeqno;
	NSMutableDictionary* _byIdent;

}

@property (nonatomic,readonly) unsigned long long timerCount; 
-(id)init;
-(id)initWithQueue:(id)arg1 timerCallback:(/*^block*/id)arg2 ;
-(void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2 ;
-(void)cancelTimerForSequenceNumber:(unsigned long long)arg1 ;
-(void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2 ;
-(void)cancelTimerForIdentifier:(id)arg1 ;
-(unsigned long long)timerCount;
-(void)cancelAllTimers;
@end

