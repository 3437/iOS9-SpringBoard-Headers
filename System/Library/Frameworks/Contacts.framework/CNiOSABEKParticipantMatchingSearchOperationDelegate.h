/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class NSString;

@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABSearchOperationDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_completeWithRecord:(void*)arg1 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

