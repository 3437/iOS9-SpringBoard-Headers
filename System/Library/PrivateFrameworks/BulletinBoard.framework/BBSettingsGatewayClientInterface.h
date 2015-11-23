/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBSettingsGatewayClientInterface <NSObject>
@required
-(void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
-(void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
-(void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2;
-(void)behaviorOverridesEffectiveWhileUnlockedChanged:(BOOL)arg1 source:(unsigned long long)arg2;

@end
