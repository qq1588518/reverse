//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBUITextAttachmentRange : NSObject
{
    long long _type;
    id _content;
    NSString *_contentDescription;
    long long _sortPriority;
    struct _NSRange _range;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) long long sortPriority; // @synthesize sortPriority=_sortPriority;
@property(retain, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long end;
@property(readonly, nonatomic) unsigned long long start;
- (void)dealloc;

@end

