#pragma once

#include "Misc/MessageDialog.h" // �޼���â �ٿ�� ���
#include "Widgets/Notifications/SNotificationList.h" //�˸� ���(UI), ������(NotificationManager.h)�κ��� ���� �˸� ������ ȭ�鿡 �׸��� �ð��� ����
#include "Framework/Notifications/NotificationManager.h" // �˸� ������ 

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
		FText MsgTitle = FText::FromString(TEXT("Warning")); // ��ܿ� �ߴ� Ÿ��Ʋ

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
	NotifyInfo.bUseLargeFont = true; // ū ��ü ���
	NotifyInfo.FadeOutDuration = 7.f; // 7���Ŀ� �����(fade out)

	FSlateNotificationManager::Get().AddNotification(NotifyInfo); // ���� ����� �����Ϳ� �߰��ؼ� �˸������� ���� �� ȣ��
}