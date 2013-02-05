/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@class NSTimer, NSString, NSObject<OS_dispatch_source>, HTSHTTPServer, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {
    BOOL _closeOnEmptyQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_identifier;
    NSTimer *_idleTimer;
    struct __CFHTTPMessage { } *_incomingMessage;
    NSMutableArray *_incomingQueue;
    double _lastActivity;
    NSMutableArray *_outputQueue;
    BOOL _outputStalled;
    BOOL _readActive;
    NSObject<OS_dispatch_source> *_readSource;
    HTSHTTPServer *_server;
    int _socket;
    int _socketRefCount;
    BOOL _writeActive;
    NSObject<OS_dispatch_source> *_writeSource;
}

@property(readonly) NSString * identifier;
@property(retain) NSTimer * idleTimer;
@property double lastActivity;

- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_processIncomingBytes:(const char *)arg1 length:(long)arg2;
- (void)_processStreamInput;
- (void)_processStreamOutput;
- (void)_shutdownIdleConnection:(id)arg1;
- (void)dealloc;
- (id)identifier;
- (id)idleTimer;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (double)lastActivity;
- (void)printData:(id)arg1 withMessage:(id)arg2;
- (void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(BOOL)arg3;
- (void)setIdleTimer:(id)arg1;
- (void)setLastActivity:(double)arg1;

@end