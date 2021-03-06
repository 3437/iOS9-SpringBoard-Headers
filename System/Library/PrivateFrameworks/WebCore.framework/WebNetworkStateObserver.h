/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebNetworkStateObserver : NSObject {

	const NetworkStateNotifier* _notifier;

}

@property (assign,nonatomic) const NetworkStateNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
-(void)dealloc;
-(void)networkStateChanged:(id)arg1 ;
-(id)initWithNotifier:(const NetworkStateNotifier*)arg1 ;
-(const NetworkStateNotifier*)notifier;
-(void)setNotifier:(const NetworkStateNotifier*)arg1 ;
@end

