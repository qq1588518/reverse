//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KFAttachment : NSObject
{
    _Bool _isImage;
    NSString *_Id;
    NSString *_name;
    NSString *_size;
    NSString *_token;
    NSString *_url;
}

+ (id)attachmentsWithDict:(id)arg1;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;

@end

