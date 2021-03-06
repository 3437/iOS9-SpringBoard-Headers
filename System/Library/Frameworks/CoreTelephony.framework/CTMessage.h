/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CTMessageAddressNSCopying;
@class NSObject, NSMutableArray, NSDictionary, NSDate, CTPhoneNumber, NSString, NSMutableDictionary, NSUUID, NSArray;

@interface CTMessage : NSObject {

	NSObject*<CTMessageAddress>*<NSCopying> _sender;
	NSMutableArray* _recipients;
	NSMutableArray* _items;
	NSDictionary* _rawHeaders;
	NSDate* _date;
	unsigned _messageId;
	int _messageType;
	CTPhoneNumber* _serviceCenter;
	NSString* _subject;
	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	unsigned _replaceMessage;
	NSString* _countryCode;
	NSUUID* _uuid;

}

@property (readonly) NSArray * recipients;                                              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (readonly) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (readonly) NSDictionary * rawHeaders;                                         //@synthesize rawHeaders=_rawHeaders - In the implementation block
@property (readonly) unsigned replaceMessage;                                           //@synthesize replaceMessage=_replaceMessage - In the implementation block
@property (assign,nonatomic) unsigned messageId;                                        //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) int messageType;                                           //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) CTPhoneNumber * serviceCenter;                               //@synthesize serviceCenter=_serviceCenter - In the implementation block
@property (nonatomic,copy) NSString * subject;                                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSObject*<CTMessageAddress>*<NSCopying> sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                      //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                             //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;                                 //@synthesize uuid=_uuid - In the implementation block
-(void)setRawHeaders:(NSDictionary *)arg1 ;
-(void)setReplaceMessage:(unsigned)arg1 ;
-(void)removeRecipientsInArray:(id)arg1 ;
-(id)addData:(id)arg1 withContentType:(id)arg2 ;
-(void)removePartAtIndex:(unsigned long long)arg1 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(NSDictionary *)rawHeaders;
-(id)initWithDate:(id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)setRecipient:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDate *)date;
-(NSArray *)items;
-(NSString *)contentType;
-(NSObject*<CTMessageAddress>*<NSCopying>)sender;
-(void)setSubject:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setSender:(NSObject*<CTMessageAddress>*<NSCopying>)arg1 ;
-(NSString *)subject;
-(id)addText:(id)arg1 ;
-(id)addPart:(id)arg1 ;
-(void)addEmailRecipient:(id)arg1 ;
-(void)addPhoneRecipient:(id)arg1 ;
-(void)setServiceCenter:(CTPhoneNumber *)arg1 ;
-(CTPhoneNumber *)serviceCenter;
-(unsigned)replaceMessage;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(unsigned)messageId;
-(void)setMessageId:(unsigned)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(int)messageType;
@end

