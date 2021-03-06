/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HKHealthStore, HKSource, NSArray, NSMutableSet, NSSet;

@interface HKSourceAuthorizationController : NSObject {

	HKHealthStore* _healthStore;
	HKSource* _source;
	NSArray* _orderedTypesForSharing;
	NSArray* _orderedTypesForReading;
	NSMutableSet* _typesEnabledForSharing;
	NSMutableSet* _typesEnabledForReading;
	NSSet* _requestedTypesForSharing;
	NSSet* _requestedTypesForReading;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSource * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForSharing;                   //@synthesize orderedTypesForSharing=_orderedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForReading;                   //@synthesize orderedTypesForReading=_orderedTypesForReading - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForSharing;              //@synthesize typesEnabledForSharing=_typesEnabledForSharing - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForReading;              //@synthesize typesEnabledForReading=_typesEnabledForReading - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForSharing;                   //@synthesize requestedTypesForSharing=_requestedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForReading;                   //@synthesize requestedTypesForReading=_requestedTypesForReading - In the implementation block
-(HKHealthStore *)healthStore;
-(void)reload;
-(HKSource *)source;
-(id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4 ;
-(void)commitAuthorizationStatuses;
-(id)typesInSection:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(BOOL)arg4 ;
-(BOOL)anyTypeEnabled;
-(BOOL)allTypesEnabled;
-(void)setEnabled:(BOOL)arg1 forAllTypesInSection:(long long)arg2 commit:(BOOL)arg3 ;
-(BOOL)isTypeEnabled:(id)arg1 inSection:(long long)arg2 ;
-(id)_enabledTypesInSection:(long long)arg1 ;
-(void)_updateAuthorizationStatusWithTypes:(id)arg1 ;
-(long long)_authorizationStatusWithType:(id)arg1 ;
-(void)_setAuthorizationStatuses:(id)arg1 ;
-(unsigned long long)countOfTypesInSection:(long long)arg1 ;
-(NSArray *)orderedTypesForSharing;
-(void)setOrderedTypesForSharing:(NSArray *)arg1 ;
-(NSArray *)orderedTypesForReading;
-(void)setOrderedTypesForReading:(NSArray *)arg1 ;
-(NSMutableSet *)typesEnabledForSharing;
-(void)setTypesEnabledForSharing:(NSMutableSet *)arg1 ;
-(NSMutableSet *)typesEnabledForReading;
-(void)setTypesEnabledForReading:(NSMutableSet *)arg1 ;
-(NSSet *)requestedTypesForSharing;
-(void)setRequestedTypesForSharing:(NSSet *)arg1 ;
-(NSSet *)requestedTypesForReading;
-(void)setRequestedTypesForReading:(NSSet *)arg1 ;
-(void)_reload;
@end

