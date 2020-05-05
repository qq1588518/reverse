//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableString;
@protocol RTEHTMLParserDataSource, RTEHTMLParserDelegate;

@interface RTEHTMLParser : NSObject
{
    struct _xmlSAXHandler m_handler;
    NSData *m_data;
    NSMutableString *m_accumulateBuffer;
    _Bool m_isAborting;
    id <RTEHTMLParserDelegate> _delegate;
    id <RTEHTMLParserDataSource> _dataSource;
    NSError *_error;
    unsigned long long _encoding;
    struct _xmlParserCtxt *_parserCtx;
}

@property(nonatomic) struct _xmlParserCtxt *parserCtx; // @synthesize parserCtx=_parserCtx;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <RTEHTMLParserDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <RTEHTMLParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_lookupCustomElement:(const char *)arg1;
- (void)_bridgeFoundProcessingInstruction;
- (void)_bridgeFoundCDATA;
- (void)_bridgeErrorOccured;
- (void)_bridgeFoundComment;
- (void)_bridgeEndElement;
- (void)_bridgeStartElement;
- (void)_bridgeFoundCharacters;
- (void)_bridgeEndDocument;
- (void)_brigeStartDocument;
- (const char *)remainContent;
- (unsigned long long)currentParseLocation;
- (void)abortParsing;
- (_Bool)parse;
- (void)_accumulateCharacters:(const char *)arg1 length:(int)arg2;
- (void)_resetAccumulateBufferAndReportCharacters;
- (void)dealloc;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;

@end

