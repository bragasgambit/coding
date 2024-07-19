// This is a test
Deno.serve((_req: Request) => {
    return new Response("Hello, world!");
});

// $ deno run --allow-net server.ts
