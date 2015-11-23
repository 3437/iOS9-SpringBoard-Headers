/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject {

	CNAutocompleteFetchRequest* _request;
	NSMutableDictionary* _datesByBatchIndexes;

}

@property (nonatomic,readonly) CNAutocompleteFetchRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * datesByBatchIndexes;              //@synthesize datesByBatchIndexes=_datesByBatchIndexes - In the implementation block
-(CNAutocompleteFetchRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)relevantForRequest:(id)arg1 ;
-(NSMutableDictionary *)datesByBatchIndexes;
-(void)didReceiveBatch:(unsigned long long)arg1 ;
-(void)setDatesByBatchIndexes:(NSMutableDictionary *)arg1 ;
@end
