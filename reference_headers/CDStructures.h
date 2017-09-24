//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float width;
    float height;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _Crashlytics__CustomAttribute;

struct _Crashlytics__InternalData;

struct _Crashlytics__Session {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _ProtobufCBinaryData _field3;
    unsigned long long _field4;
    int _field5;
    unsigned long long _field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    struct _Crashlytics__InternalData *_field15;
    struct _Crashlytics__Session__User *_field16;
    struct _Crashlytics__Session__Application *_field17;
    struct _Crashlytics__Session__OperatingSystem *_field18;
    struct _Crashlytics__Session__Device *_field19;
    unsigned int _field20;
    struct _Crashlytics__Session__Event **_field21;
};

struct _Crashlytics__Session__Application {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    int _field9;
    int _field10;
    struct _Crashlytics__Session__Application__Process *_field11;
    struct _Crashlytics__Session__Application__Organization *_field12;
};

struct _Crashlytics__Session__Application__Organization;

struct _Crashlytics__Session__Application__Process;

struct _Crashlytics__Session__Device {
    struct _ProtobufCMessage _field1;
    int _field2;
    struct _ProtobufCBinaryData _field3;
    int _field4;
    struct _ProtobufCBinaryData _field5;
    int _field6;
    char *_field7;
    int _field8;
    unsigned int _field9;
    int _field10;
    unsigned long long _field11;
    int _field12;
    unsigned long long _field13;
    char *_field14;
    char *_field15;
    int _field16;
    int _field17;
    unsigned int _field18;
    struct _Crashlytics__Session__Device__Identifier **_field19;
    int _field20;
    unsigned int _field21;
    char *_field22;
    char *_field23;
};

struct _Crashlytics__Session__Device__Identifier;

struct _Crashlytics__Session__Event {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    char *_field3;
    char *_field4;
    struct _Crashlytics__Session__Event__Application *_field5;
    struct _Crashlytics__Session__Event__OperatingSystem *_field6;
    struct _Crashlytics__Session__Event__Device *_field7;
    struct _Crashlytics__Session__Event__Log *_field8;
};

struct _Crashlytics__Session__Event__Application;

struct _Crashlytics__Session__Event__Device;

struct _Crashlytics__Session__Event__Log;

struct _Crashlytics__Session__Event__OperatingSystem;

struct _Crashlytics__Session__OperatingSystem {
    struct _ProtobufCMessage _field1;
    int _field2;
    char *_field3;
    char *_field4;
    int _field5;
    int _field6;
};

struct _Crashlytics__Session__User {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    unsigned int _field5;
    struct _Crashlytics__CustomAttribute **_field6;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct _ProtobufCBinaryData {
    unsigned int _field1;
    char *_field2;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_60d14f2d;

typedef struct {
    int _field1;
    int _field2;
    char *_field3;
    _Bool _field4;
    char *_field5;
    _Bool _field6;
} CDStruct_9c005df8;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    CDStruct_183601bc *_field3;
} CDStruct_a6175b54;
