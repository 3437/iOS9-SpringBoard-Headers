/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ContentIndex/ContentIndex-Structs.h>
@class NSString;

@interface CXIndex : NSObject {

	int _cancel;
	NSString* _path;
	SIRef _skRef;

}

@property (assign,nonatomic) int cancel;                     //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) SIRef skRef;                  //@synthesize skRef=_skRef - In the implementation block
+(void)initialize;
-(int)cancel;
-(void)dealloc;
-(NSString *)path;
-(BOOL)commit;
-(id)initWithPath:(id)arg1 ;
-(void)setCancel:(int)arg1 ;
-(BOOL)flush:(unsigned)arg1 ;
-(SIRef)skRef;
-(BOOL)open:(unsigned)arg1 recoveredTransactionId:(unsigned*)arg2 ;
-(int*)cancelPtr;
-(_SI*)siIndexPtr;
-(BOOL)compact:(unsigned)arg1 ;
-(BOOL)addContent:(id)arg1 metadata:(id)arg2 docName:(id)arg3 transaction:(unsigned*)arg4 ;
-(void)deleteDocumentByName:(id)arg1 ;
-(void)deleteDocument:(unsigned)arg1 ;
-(BOOL)addContent:(id)arg1 metadata:(id)arg2 doc:(unsigned)arg3 transaction:(unsigned*)arg4 ;
-(BOOL)addContent:(id)arg1 transaction:(unsigned*)arg2 ;
-(void)close:(unsigned)arg1 ;
-(BOOL)create:(unsigned)arg1 ;
@end

