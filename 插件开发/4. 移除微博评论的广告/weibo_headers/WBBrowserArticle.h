//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseArticle.h"

@class NSDictionary, NSString;

@interface WBBrowserArticle : WBBaseArticle
{
    _Bool _allow_comment;
    NSDictionary *_mblog;
    NSString *_web_title;
    NSDictionary *_recommend;
    NSString *_comments_scheme;
    NSDictionary *_forward_button;
}

@property(retain, nonatomic) NSDictionary *forward_button; // @synthesize forward_button=_forward_button;
@property(copy, nonatomic) NSString *comments_scheme; // @synthesize comments_scheme=_comments_scheme;
@property(nonatomic) _Bool allow_comment; // @synthesize allow_comment=_allow_comment;
@property(retain, nonatomic) NSDictionary *recommend; // @synthesize recommend=_recommend;
@property(copy, nonatomic) NSString *web_title; // @synthesize web_title=_web_title;
@property(retain, nonatomic) NSDictionary *mblog; // @synthesize mblog=_mblog;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

