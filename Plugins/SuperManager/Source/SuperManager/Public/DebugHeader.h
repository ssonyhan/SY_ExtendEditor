#pragma once

#include "Misc/MessageDialog.h" // 메세지창 뛰우는 헤더
#include "Widgets/Notifications/SNotificationList.h" //알림 목록(UI), 관리자(NotificationManager.h)로부터 받은 알림 정보를 화면에 그리는 시각적 위젯
#include "Framework/Notifications/NotificationManager.h" // 알림 관리자 

void Print(const FString& Message, const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.f, Color, Message);
	}
}

void PrintLog(const FString& Message)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}

EAppReturnType::Type ShowMsgDialog(EAppMsgType::Type MsgType, const FString& Message,
	bool bShowMsgAsWarning = true)
{
	if (bShowMsgAsWarning)
	{
		FText MsgTitle = FText::FromString(TEXT("Warning")); // 상단에 뜨는 타이틀

		return FMessageDialog::Open(MsgType, FText::FromString(Message), &MsgTitle);
	}
	else
	{
		return FMessageDialog::Open(MsgType, FText::FromString(Message));
	}
}

void ShowNotifyInfo(const FString& Message) 
{
	FNotificationInfo NotifyInfo(FText::FromString(Message));
	NotifyInfo.bUseLargeFont = true; // 큰 서체 사용
	NotifyInfo.FadeOutDuration = 7.f; // 7초후에 사라짐(fade out)

	FSlateNotificationManager::Get().AddNotification(NotifyInfo); // 위의 기능을 에디터에 추가해서 알림정보를 전달 후 호출
}