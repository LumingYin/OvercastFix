#import <Security/SecureTransport.h>

@interface OCAPIConnection : NSObject
+ (void)showRateLimitAlert;
+ (void)showSSLPinningAlert;
+ (void)showAPIErrorAlert;
+ (void)startITunesLookupRequestWithArguments:(id)arg1 completion:(id)arg2;
+ (void)startITunesSearchRequestWithArguments:(id)arg1 completion:(id)arg2;
+ (void)startStaticAPIRequestWithAction:(id)arg1 arguments:(id)arg2 completion:(id)arg3;
+ (void)startRequestWithMethod:(id)arg1 controller:(id)arg2 action:(id)arg3 arguments:(id)arg4 requestBody:(id)arg5 completion:(id)arg6;
+ (id)_synchronousRequestWithMethod:(id)arg1 host:(id)arg2 controller:(id)arg3 action:(id)arg4 arguments:(id)arg5 requestBody:(id)arg6 sendToken:(BOOL)arg7 pin:(BOOL)arg8 apiError:(int *)arg9 connectionError:(id *)arg10;
+ (id)sendSynchronousRequestWithMethod:(id)arg1 controller:(id)arg2 action:(id)arg3 arguments:(id)arg4 requestBody:(id)arg5 apiError:(int *)arg6 connectionError:(id *)arg7;
+ (id)_requestWithMethod:(id)arg1 host:(id)arg2 controller:(id)arg3 action:(id)arg4 arguments:(id)arg5 requestBody:(id)arg6 sendToken:(BOOL)arg7;
+ (id)requestWithMethod:(id)arg1 controller:(id)arg2 action:(id)arg3 arguments:(id)arg4 requestBody:(id)arg5;
+ (id)downloadableURLForUploadedFileURLString:(id)arg1;
+ (void)setLoginToken:(id)arg1;
+ (id)loginToken;
@end

%hook OCAPIConnection
+ (id)_synchronousRequestWithMethod:(id)arg1 host:(id)arg2 controller:(id)arg3 action:(id)arg4 arguments:(id)arg5 requestBody:(id)arg6 sendToken:(BOOL)arg7 pin:(BOOL)arg8 apiError:(int *)arg9 connectionError:(id *)arg10 {
	%log;
	NSLog(@"Important: arguments is of type %@", [[arg6 class] description]);
	NSString *newHost = @"api.overcast.fm";
	NSString *newController = @"api3";
	NSString *newAction = [NSString stringWithFormat:@"%@", arg4];
	NSDictionary *requestDict = [arg6 mutableCopy];
	NSLog(@"WE CARE: (BEFORE) requestDict is %@, %@", arg6, [arg6 description]);
	if ([arg4 isEqualToString:@"sync_v2"]) {
		newAction = @"sync";
	} else if ([arg4 isEqualToString:@"items_for_feed"]) {
		newAction = @"user_items_for_feed";
		[requestDict setValue:@"-SNtL-IfQkd-keJ0817uhNK6j4q2QRZaW03xUl-v0PzlLcatqYJ7t7KUIpjtm-h5V-Xt-AdjtsaDZIVJ" forKey:@"u"];
		[requestDict setValue:@"q50And" forKey:@"hash"];
	} else if ([arg4 isEqualToString:@"login"]) {
		newController = @"user_api";
	}
	NSLog(@"WE CARE: (AFTER) requestDict is %@, %@", requestDict, [requestDict description]);
	return %orig(arg1, newHost, newController, newAction, arg5, requestDict, arg7, NO, arg9, arg10);
}
+ (id)sendSynchronousRequestWithMethod:(id)arg1 controller:(id)arg2 action:(id)arg3 arguments:(id)arg4 requestBody:(id)arg5 apiError:(int *)arg6 connectionError:(id *)arg7 {
	%log;
	return %orig;
}
+ (id)_requestWithMethod:(id)arg1 host:(id)arg2 controller:(id)arg3 action:(id)arg4 arguments:(id)arg5 requestBody:(id)arg6 sendToken:(BOOL)arg7 {
	%log;
	NSLog(@"Important: arguments is of type %@", [[arg6 class] description]);
	NSString *newHost = @"api.overcast.fm";
	NSString *newController = @"api3";
	NSString *newAction = [NSString stringWithFormat:@"%@", arg4];
	NSDictionary *requestDict = [arg6 mutableCopy];
	NSLog(@"WE CARE: (BEFORE) requestDict is %@, %@", requestDict, [requestDict description]);
	if ([arg4 isEqualToString:@"sync_v2"]) {
		newAction = @"sync";
	} else if ([arg4 isEqualToString:@"items_for_feed"]) {
		newAction = @"user_items_for_feed";
		[requestDict setValue:@"-SNtL-IfQkd-keJ0817uhNK6j4q2QRZaW03xUl-v0PzlLcatqYJ7t7KUIpjtm-h5V-Xt-AdjtsaDZIVJ" forKey:@"u"];
		[requestDict setValue:@"q50And" forKey:@"hash"];
	} else if ([arg4 isEqualToString:@"login"]) {
		newController = @"user_api";
	}
	NSLog(@"WE CARE: (AFTER) requestDict is %@, %@", requestDict, [requestDict description]);
	return %orig(arg1, newHost, newController, newAction, arg5, requestDict, arg7);
}
+ (void)showRateLimitAlert {
	%log;
	return %orig;
}
+ (void)showSSLPinningAlert {
	%log;
	return %orig;
}
+ (void)showAPIErrorAlert {
	%log;
	return %orig;
}
+ (void)startITunesLookupRequestWithArguments:(id)arg1 completion:(id)arg2 {
	%log;
	return %orig;
}
+ (void)startITunesSearchRequestWithArguments:(id)arg1 completion:(id)arg2 {
	%log;
	return %orig;
}
+ (void)startStaticAPIRequestWithAction:(id)arg1 arguments:(id)arg2 completion:(id)arg3 {
	%log;
	return %orig;
}
+ (void)startRequestWithMethod:(id)arg1 controller:(id)arg2 action:(id)arg3 arguments:(id)arg4 requestBody:(id)arg5 completion:(id)arg6 {
	%log;
	return %orig;
}
+ (id)requestWithMethod:(id)arg1 controller:(id)arg2 action:(id)arg3 arguments:(id)arg4 requestBody:(id)arg5 {
	%log;
	return %orig;
}
+ (id)downloadableURLForUploadedFileURLString:(id)arg1 {
	%log;
	return %orig;
}
+ (void)setLoginToken:(id)arg1 {
	%log;
	return %orig;
}
+ (id)loginToken {
	%log;
	return %orig;
}
%end

@interface OCStoreRegionalDistrictAssistantManager : NSObject
	@property(readonly, nonatomic) BOOL didPurchaseUnlockEverything;
@end

%hook OCStoreRegionalDistrictAssistantManager
- (BOOL)didPurchaseUnlockEverything {
	%log;
	return YES;
}

- (BOOL)getDidPurchaseUnlockEverything {
	%log;
	return YES;
}
%end

@interface OCFeed : NSObject
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@end

%hook OCAPIConnection
- (void)setLanguage:(NSString *)language {
	%log;
	if (language == nil || language == [NSNull class]) {
		return %orig(@"english");
	}
	return %orig(language);
}
%end

// Hook SSLSetSessionOption()
static OSStatus (*original_SSLSetSessionOption)(
    SSLContextRef context, 
    SSLSessionOption option, 
    Boolean value);

static OSStatus replaced_SSLSetSessionOption(
    SSLContextRef context, 
    SSLSessionOption option, 
    Boolean value) {

    // Remove the ability to modify the value of the kSSLSessionOptionBreakOnServerAuth option
    if (option == kSSLSessionOptionBreakOnServerAuth)
        return noErr;
    else
        return original_SSLSetSessionOption(context, option, value);
}


// Hook SSLCreateContext()
static SSLContextRef (*original_SSLCreateContext) (
   CFAllocatorRef alloc,
   SSLProtocolSide protocolSide,
   SSLConnectionType connectionType
);

static SSLContextRef replaced_SSLCreateContext (
   CFAllocatorRef alloc,
   SSLProtocolSide protocolSide,
   SSLConnectionType connectionType
) {
    SSLContextRef sslContext = original_SSLCreateContext(alloc, protocolSide, connectionType);
    
    // Immediately set the kSSLSessionOptionBreakOnServerAuth option in order to disable cert validation
    original_SSLSetSessionOption(sslContext, kSSLSessionOptionBreakOnServerAuth, true);
    return sslContext;
}


// Hook SSLHandshake()
static OSStatus (*original_SSLHandshake)(
    SSLContextRef context
);

static OSStatus replaced_SSLHandshake(
    SSLContextRef context
) {
    OSStatus result = original_SSLHandshake(context);

    // Hijack the flow when breaking on server authentication
    if (result == errSSLServerAuthCompleted) {
        // Do not check the cert and call SSLHandshake() again
        return original_SSLHandshake(context);
    }
    else
        return result;
}


%ctor {
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

    // Should we enable the hook ?
    NSLog(@"SSL Kill Switch - Hook Enabled.");
    MSHookFunction((void *) SSLHandshake,(void *)  replaced_SSLHandshake, (void **) &original_SSLHandshake);
    MSHookFunction((void *) SSLSetSessionOption,(void *)  replaced_SSLSetSessionOption, (void **) &original_SSLSetSessionOption);
    MSHookFunction((void *) SSLCreateContext,(void *)  replaced_SSLCreateContext, (void **) &original_SSLCreateContext);

    [pool drain];
}