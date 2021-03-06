/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSItemProviderLoading.h>

@class NSItemProvider, NSDictionary, NSString;

@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading> {

	NSItemProvider* _itemProvider;
	NSDictionary* _loadedItems;

}

@property (assign,nonatomic) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedItems;                 //@synthesize loadedItems=_loadedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSItemProvider *)itemProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(NSDictionary *)loadedItems;
-(void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4 ;
-(void)loadPreviewImageWithCompletionHandler:(/*^block*/id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3 ;
-(id)initWithItemProvider:(id)arg1 ;
-(id)_loadItemsForTypeIdentifiers:(id)arg1 itemProvider:(id)arg2 ;
-(id)_sandboxedResourceForItemIfNeeded:(id)arg1 error:(id*)arg2 ;
@end

