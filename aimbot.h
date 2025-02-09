t.me/eternium_hacks2
Standoff2 0.32.2
void *(get_bipedmap)(void*); // il2cpp + 0x27049F0
void AIMBOT()
{
    void *v0 = *(void*)((uint64_t)il2cppstartaddr + 0x5139E30 +0x20 + 0xB8 + 0x70);
    if (v0)
    {
        void *v2 = *(void*)((uint64_t)il2cppstartaddr + 0x5139E30 + 0x20 + 0xB8);
        if (v2)
        {
            while (1)
            {
                if (v2 != NULL)
                {
                    if (AimBotEnabled)
                    {
                        void* PlayerHead = *(void**)((uint64_t)get_bipedmap(enemy) + 0x20);
                        Vector3 Target = get_position(get_transform(PlayerHead)) - get_position(get_transform(get_main()));
                        float AimAngle = Vector3::Angle(Target, get_forward(get_transform(get_main())) * 150);
                        v45 = *(void*)((uint64_t)v0 + 0x60 + 0x90);
                        if (AimAngle >= 275.0)
                            AimAngle = AimAngle - 360.0;
                        if (AimAngle <= -275.0)
                            AimAngle = AimAngle + 360.0;
                        *(float *)(v45 + 0x18) = AimAngle;
                        *(float *)(v45 + 0x1C) = AimAngle;
                        *(float *)(v45 + 0x20) = AimAngle;
                        *(float *)(v45 +0x24) = AimAngle;
                        *(float *)(v45 + 0x28) = AimAngle;
                        *(float *)(v45 + 0x2C) = AimAngle;
                    }
                }
            }
        }
    }
}