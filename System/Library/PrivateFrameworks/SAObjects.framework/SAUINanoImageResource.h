/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (assign,nonatomic) BOOL backgroundNeeded; 
@property (nonatomic,copy) NSString * imageDownloadType; 
@property (nonatomic,retain) SAUIDecoratedText * monogram; 
@property (nonatomic,copy) NSString * placeholderImage; 
+(id)nanoImageResource;
+(id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setMonogram:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)monogram;
-(NSString *)placeholderImage;
-(void)setPlaceholderImage:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)backgroundNeeded;
-(void)setBackgroundNeeded:(BOOL)arg1 ;
-(NSString *)imageDownloadType;
-(void)setImageDownloadType:(NSString *)arg1 ;
@end

