/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ObjectUpdates, UNSNotificationScheduler, NSArray;

@interface ClockManager : NSObject {

	BOOL _performingUpgrade;
	NSMutableArray* _scheduledLocalNotifications;
	ObjectUpdates* _localNotificationUpdates;
	BOOL runningInAssistantPlugin;
	BOOL ignoringNotificationPostRequests;
	UNSNotificationScheduler* _notificationScheduler;

}

@property (assign,getter=isRunningInAssistantPlugin,nonatomic) BOOL runningInAssistantPlugin; 
@property (assign,getter=isIgnoringNotificationPostRequests,nonatomic) BOOL ignoringNotificationPostRequests; 
@property (nonatomic,readonly) NSArray * scheduledLocalNotificationsCache; 
@property (nonatomic,readonly) ObjectUpdates * updatesToLocalNotificationsCache; 
@property (nonatomic,retain) UNSNotificationScheduler * notificationScheduler;                                             //@synthesize notificationScheduler=_notificationScheduler - In the implementation block
+(id)sharedManager;
+(void)loadUserPreferences;
+(void)saveAndNotifyForUserPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2 ;
+(id)urlForClockAppSection:(int)arg1 ;
+(int)sectionFromClockAppURL:(id)arg1 ;
-(id)init;
-(void)scheduleLocalNotification:(id)arg1 ;
-(void)cancelLocalNotification:(id)arg1 ;
-(void)postUserPreferencesChangedNotification;
-(NSArray *)scheduledLocalNotificationsCache;
-(void)resetUpdatesToLocalNotificationsCache;
-(BOOL)upgrade;
-(BOOL)discardOldVersion;
-(BOOL)isIgnoringNotificationPostRequests;
-(BOOL)isRunningInAssistantPlugin;
-(BOOL)upgradeIfNeverAttempted;
-(void)refreshScheduledLocalNotificationsCache;
-(ObjectUpdates *)updatesToLocalNotificationsCache;
-(void)setRunningInAssistantPlugin:(BOOL)arg1 ;
-(void)setIgnoringNotificationPostRequests:(BOOL)arg1 ;
-(UNSNotificationScheduler *)notificationScheduler;
-(void)setNotificationScheduler:(UNSNotificationScheduler *)arg1 ;
@end

