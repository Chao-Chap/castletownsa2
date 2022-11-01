
//void __usercall LoadChaoTexlist(unsigned __int16 a1@<ax>, char* a2@<ebx>, NJS_TEXLIST* texlist)
static const void* const LoadChaoTexlistPtr = (void*)0x530280;
static inline void LoadChaoTexlist(unsigned __int16 a1, char* a2, NJS_TEXLIST* texlist)
{
	__asm
	{

		push[texlist]
		mov ebx, [a2]
		mov ax, [a1]
		call LoadChaoTexlistPtr
		add esp, 4
	}
}

FunctionPointer(ObjectMaster*, DrawSubtitles, (int a1, const char* message, int displayTime, int language), 0x6B6E20);
VoidFunc(CollisionLoop, 0x486190);

static const void* const FreeColPtr = (void*)0x486430;
static inline void FreeEntityCollision(ObjectMaster* a1)
{
	__asm
	{
		mov ebx, [a1]
		call FreeColPtr
	}
}

FunctionPointer(void, njReleaseTexture, (NJS_TEXLIST* a1), 0x77F9F0);
DataPointer(ObjectMaster*, PointerToNormalCamera, 0x01AED2E8);
//void __usercall RunChaoBehaviour@<eax>(ObjectMaster* obj@<eax>, void* func, int idk)
static const void* const RunChaoBehaviourPtr = (void*)0x53D890;
static inline void RunChaoBehaviour(ObjectMaster* obj, void* func, int idk)
{
	__asm
	{
		push[idk]
		push[func]
		mov eax, [obj]
		call RunChaoBehaviourPtr
		add esp, 8
	}
}
DataPointer(int, activelandtablecolcount, 0x1DE9484);
