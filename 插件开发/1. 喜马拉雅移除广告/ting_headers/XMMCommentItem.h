//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, XMMComment;

@interface XMMCommentItem : NSObject
{
    _Bool _hasMore;
    XMMComment *_comment;
    NSArray *_replies;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain, nonatomic) XMMComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)copyVariableInfoFrom:(id)arg1;
- (id)uniqueKey;

@end

