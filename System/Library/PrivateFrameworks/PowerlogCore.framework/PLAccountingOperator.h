/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLOperator.h>

@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator {

	NSSet* _rules;
	NSMutableDictionary* _ruleIDToPendingJobs;

}

@property (nonatomic,retain) NSSet * rules;                                //@synthesize rules=_rules - In the implementation block
@property (retain) NSMutableDictionary * ruleIDToPendingJobs;              //@synthesize ruleIDToPendingJobs=_ruleIDToPendingJobs - In the implementation block
+(void)load;
+(id)entryEventNoneDefinitionNodes;
+(id)entryEventNoneDefinitionDistributionRules;
+(id)entryEventNoneDefinitionQualificationRules;
+(id)entryEventForwardDefinitionPowerEvents;
+(id)entryEventForwardDefinitionDistributionEvents;
+(id)entryEventForwardDefinitionQualificationEvents;
+(id)entryEventBackwardDefinitionPowerEvents;
+(id)entryEventBackwardDefinitionDistributionEvents;
+(id)entryEventBackwardDefinitionQualificationEvents;
+(id)entryEventIntervalDefinitionPowerEvents;
+(id)entryEventIntervalDefinitionEnergyEstimateEvents;
+(id)entryEventIntervalDefinitionDistributionEvents;
+(id)entryEventIntervalDefinitionQualificationEvents;
+(id)entryEventPointDefinitionDistributionEvents;
+(id)entryEventPointDefinitionQualificationEvents;
+(id)entryAggregateDefinitionEnergy;
+(id)entryAggregateDefinitionQualificationEnergy;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
-(id)init;
-(NSSet *)rules;
-(void)startAccounting;
-(void)stopAccounting;
-(NSMutableDictionary *)ruleIDToPendingJobs;
-(void)setRuleIDToPendingJobs:(NSMutableDictionary *)arg1 ;
-(void)initOperatorDependancies;
-(id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2 ;
-(void)setRules:(NSSet *)arg1 ;
@end

