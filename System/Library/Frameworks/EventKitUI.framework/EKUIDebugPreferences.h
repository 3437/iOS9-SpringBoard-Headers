/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences;

@interface EKUIDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) BOOL showInviteesAndMoreRegion; 
@property (assign,nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines; 
@property (assign,nonatomic) BOOL showReportAProblemNotificationButton; 
+(id)shared;
-(BOOL)showInviteesAndMoreRegion;
-(void)setShowInviteesAndMoreRegion:(BOOL)arg1 ;
-(BOOL)verifyIntegrityOfAvailabilityTimeSearchTimelines;
-(void)setVerifyIntegrityOfAvailabilityTimeSearchTimelines:(BOOL)arg1 ;
-(BOOL)showReportAProblemNotificationButton;
-(void)setShowReportAProblemNotificationButton:(BOOL)arg1 ;
-(id)init;
@end

